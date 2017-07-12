//
//  NetworkRequest.h
//  TRSSDK
//
//  Created by 张张凯 on 16/6/22.
//  Copyright © 2016年 zhangkai. All rights reserved.

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "EventInfo.h"

@interface TRSRequest : NSObject


/**
 *  获取用APP的信息
 *  @param appKey    收到的分发的APPKey
 *  @param appID     收到分发的APPID
 *  @param channel   APP的发布渠道，例如“APP Store”
 */
+ (void)setAppKey:(NSString *)appKey setAppID:(NSString *)appID andChannel:(NSString *)channel;

/**
 *
 *
 *  @param statisticsURL 统计路径
 *  @param loginUser     用户登录名
 *  @param deviceID      对方传的唯一标识
 */
+ (void)statisticsURL:(NSString *)statisticsURL loginUser:(NSString *)loginUser andDeveceID:(NSString *)deviceID;


//获取用户经纬度  
+ (void)getLongitude:(NSString *)longitude andLatitude:(NSString *)latitude;




//这些统计事件以及详细新闻，采用对象传值
+ (void)recordGeneral:(EventInfo *)messsageInfo;



//数据统计
+ (void)recordGeneralWithDuration:(EventInfo *)messsageInfo;




//新增的事件统计类型，分为两种。1、必要传值接口。 2、非必要传值接口。 事件动作编码、动作细化、界面种类、对象类型编码等等
//3、使用模型了来接收数据以及传值数据，这个也是比较麻烦。
//方法1：这样的话会导致传参比较多，头大
//+ (void)eventMove:(NSString *)eventMove pageType:(NSString *)pageType objectTpye:(NSString *)objectType objectID:(NSString *)objectID classifyID:(NSString *)classifyID classifyName:(NSString *)classifyName;

//方法2 使用模型传值  如果这样的话，根本就不需要设置什么必要的接口处传值以及不必要的传值，因为模型的话都已经包含进去了，直接赋值，传模型就行了。这样的话，模型传多个参数的优势就体现出来了。



//由于传值方式的改变，SDK的传值使用字典的的部分需要重新处理。
//6.15 改成一个方法，页面方法和事件方法合二为一。说什么在new的时候获取觉得不可行。现在验证如下：



//不可行的原因：动用同一个方法，如果此时有页面、有多个按钮事件、掺到一起，那么是不是会导致数据被替换掉呢？

/* 6.16
 讨论之后：
 
    每new一次之后，都是现在时间减去new的时间，这样的话事件也有访问时长了。
    
    之前的事件以及页面方法全部报废，都不使用了。
    全部都是用同一个方法
 
    必须要用SDK的对象类给的方法初始化。
    因为我们要在初始化方法中获取初始时间，然后在调用发送方法的时候用现在时间减去初始化时间，就得出访问时长的数据了。
 
 
    传递的参数中完全没有字典和数组了。所以之前那些复杂数组以及字典的处理也全部都消除掉了。
    以页面为单位，每一个页面可以包含事件类型、详细新闻类型的信息。
 
    网络正常：
    采集十个页面发送数据
 
 
    网络断开：
    网络断开，（NSUserDefault）存储数据。如果，网络连接成功，发送存储数据。
 
 */

/*  6.19
    发送的信息包含：访问次数，SDK内部区分吗？还有时间呢?所以还是要分页面和其他事件两种方法，归类为一种方法是无法
    先把数据都完善起来，等到
 */



/*  不可行
    6.15 定下页面和事件采集的方法大致流程，整体思路：
    1、不改变SDK的整体运行思路。
    2、事件采用对象传值
 
 
    事件页面变成一个方法。使用对象接受参数，每次都要new一下。这点可能不太好进行实践验证下。
 
    发送方式，点击事件
     1、每调用一次就new一次对象，然后采集，采集完成后，进行存储。
     2、在离开页面的时候也要调用事件，这样才能统计页面访问时长。如果用相同的方法，会导致原数据被替换掉。要不每次调动的时候都存储起来，这样也不行，相关联的数据有用相同的参数没有办法区分。
 
 */



@end
