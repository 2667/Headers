//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class PPChatSetting;
@protocol PPChatSettingsDataDelegate;

@protocol PPChatSettingsDataSource <NSObject>
@property(nonatomic) __weak id <PPChatSettingsDataDelegate> settingsDataDelegate;
- (void)requestModifyGisSwitch:(_Bool)arg1;
- (void)requestModifyPushSwitch:(_Bool)arg1;
- (void)requestModifyVipSwitch:(_Bool)arg1;
- (void)requestAddFollow;
- (void)requestStopFollow;
- (void)preloadRequestSettings;
- (void)requestLifeSettings;
- (void)requestSettings;
- (void)saveCacheSetting:(PPChatSetting *)arg1;
- (PPChatSetting *)getCacheSettings;
- (void)requestCacheSettings;
@end

