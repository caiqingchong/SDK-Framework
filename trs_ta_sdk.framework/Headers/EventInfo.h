//
//  EventInfo.h
//  SDKDemo
//
//  Created by 张张凯 on 17/6/15.
//  Copyright © 2017年 zhangkai. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EventInfo : NSObject
//一下五个是必传信息
@property (nonatomic,retain) NSString *eventCode;   //动作  如：分享，传编码：A0022
@property (nonatomic,retain) NSString *pageType;    //界面种类
@property (nonatomic,retain) NSString *objectType;  //对象类型
@property (nonatomic,retain) NSString *objectID;    //对象ID
@property (nonatomic,retain) NSString *classifyID;  //分类ID


//下面是选填信息
@property (nonatomic,retain) NSString *classifyName;//分类短名称
@property (nonatomic,retain) NSString *eventName;   //事件名称
@property (nonatomic,retain) NSString *eventDetail; //动作细化 如：微信、朋友圈
@property (nonatomic,retain) NSString *search;      //搜索词
@property (nonatomic,retain) NSString *number;      //数量，被操作对象的某个序号指标，如：文章字数
@property (nonatomic,retain) NSString *objectName;  //对象短名称，如：文章标题
@property (nonatomic,retain) NSString *objectIDs;   //对象IDs
@property (nonatomic,retain) NSString *sequence;    //序数，被操作对象的某个序号指标，如：打开文章阅读页时，所选文章是列表上的第几篇。
@property (nonatomic,retain) NSString *percentage;  //本次操作行为百分比，如：阅读百分比
@property (nonatomic,assign) BOOL isSuccess;   //是否成功，如：登录成功
@property (nonatomic,retain) NSString *otherInfo;   //其他信息    

@property (nonatomic,retain) NSString *visitTime;   //无需开发者调用


@end
