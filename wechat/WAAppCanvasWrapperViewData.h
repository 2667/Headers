//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LaunchWxaWidgetResponse, NSDictionary, NSString;

@interface WAAppCanvasWrapperViewData : NSObject
{
    unsigned int _debugMode;
    NSString *_appId;
    unsigned long long _version;
    NSString *_pagepath;
    NSDictionary *_query;
    NSString *_cacheKey;
    NSString *_title;
    unsigned long long _scene;
    NSString *_cpKey;
    NSString *_imageFlowStatId;
    NSString *_uniqStatId;
    NSString *_svrChecksum;
    LaunchWxaWidgetResponse *_launchResponse;
    NSDictionary *_userInfo;
    struct CGSize _canvasSize;
    CDStruct_59a221c9 _heightRange;
}

@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) CDStruct_c3b9c2ee heightRange; // @synthesize heightRange=_heightRange;
@property(retain, nonatomic) LaunchWxaWidgetResponse *launchResponse; // @synthesize launchResponse=_launchResponse;
@property(retain, nonatomic) NSString *svrChecksum; // @synthesize svrChecksum=_svrChecksum;
@property(retain, nonatomic) NSString *uniqStatId; // @synthesize uniqStatId=_uniqStatId;
@property(retain, nonatomic) NSString *imageFlowStatId; // @synthesize imageFlowStatId=_imageFlowStatId;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
@property(nonatomic) unsigned long long scene; // @synthesize scene=_scene;
@property(nonatomic) unsigned int debugMode; // @synthesize debugMode=_debugMode;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) struct CGSize canvasSize; // @synthesize canvasSize=_canvasSize;
@property(retain, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(retain, nonatomic) NSDictionary *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *pagepath; // @synthesize pagepath=_pagepath;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;

@end
