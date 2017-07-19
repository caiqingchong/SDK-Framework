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


//数据统计，未统计事件时长
+ (void)recordGeneral:(EventInfo *)messsageInfo;

//数据统计，统计事件时长
+ (void)recordGeneralWithDuration:(EventInfo *)messsageInfo;





@end
