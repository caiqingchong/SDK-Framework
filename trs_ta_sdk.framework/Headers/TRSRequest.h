//
//  NetworkRequest.h
//  TRSSDK
//
//  Created by 张张凯 on 16/6/22.
//  Copyright © 2016年 zhangkai. All rights reserved.

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>


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


/**
 *  统计新闻详细界面信息：如
 *  @param pageTitle 新闻标题
 *  @param pageType  新闻类型：图文新闻、图片新闻等
 *  @param pageID    新闻的唯一标识：@{@"newsId":@"687"}
 *  @param content   新闻的其他属性：@{@"url":@"www.baidu.com",@"subjectId":@"123"}等
 */
+ (void)currentPageTitle:(NSString *)pageTitle currentPageType:(NSString *)pageType pageID:(NSDictionary *)pageID content:(NSDictionary *)content;

//获取用户经纬度  
+ (void)getLongitude:(NSString *)longitude andLatitude:(NSString *)latitude;

//进入页面统计,如推荐、头条、杭州
+ (void)beginLogPageView:(NSString *)pageTitle;

//离开页面统计
+ (void)endLogPageView:(NSString *)pageTitle;


/**
 *  自定义事件统计
 *
 *  @param eventId     先到官网进项注册，填写事件名称对应的eventId，如：pay、addCart(必填)
 *  @param eventType   事件类型，如：buy(必填)、设置
 *  @param attributes  事件要传的属性，如@{@“book”:@"swift book",@"price":@"68"}等
 */
+ (void)event:(NSString *)eventId;

+ (void)event:(NSString *)eventId eventType:(NSString *)eventType;

+ (void)event:(NSString *)eventId eventType:(NSString *)eventType attributes:(NSDictionary *)attributes;

/** 自定义事件,时长统计.
 */
+ (void)beginEvent:(NSString *)eventId;

+ (void)endEvent:(NSString *)eventId;
/** 自定义事件,时长统计.
 */
+ (void)beginEvent:(NSString *)eventId eventType:(NSString *)eventType;

+ (void)endEvent:(NSString *)eventId eventType:(NSString *)eventType;
/** 自定义事件,时长统计.
 */
+ (void)beginEvent:(NSString *)eventId eventType:(NSString *)eventType attributes:(NSDictionary *)attributes;

+ (void)endEvent:(NSString *)eventId eventType:(NSString *)eventType attributes:(NSDictionary *)attributes;



@end
