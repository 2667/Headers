//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQWebViewPluginQQBizBase.h>

#import <QQMainProject/UserInfoDelegate-Protocol.h>

@class NSNumber, NSString, UserInfoHelp;

@interface QQJSBridgeConnectGameTeam : QQWebViewPluginQQBizBase <UserInfoDelegate>
{
    UserInfoHelp *_userInfoHelp;
    NSString *_wvUserInfoCallBack;
    NSString *_appStoreId;
    NSString *_teamId;
    NSNumber *_audioGroupId;
}

@property(copy, nonatomic) NSNumber *audioGroupId; // @synthesize audioGroupId=_audioGroupId;
@property(copy, nonatomic) NSString *teamId; // @synthesize teamId=_teamId;
@property(copy, nonatomic) NSString *appStoreId; // @synthesize appStoreId=_appStoreId;
@property(copy, nonatomic) NSString *wvUserInfoCallBack; // @synthesize wvUserInfoCallBack=_wvUserInfoCallBack;
@property(retain, nonatomic) UserInfoHelp *userInfoHelp; // @synthesize userInfoHelp=_userInfoHelp;
- (void)didLoadUserInfo:(id)arg1;
- (void)handleJsBridgeRequest_gameTeam_log:(id)arg1;
- (void)handleJsBridgeRequest_gameTeam_launchApp:(id)arg1;
- (void)handleJsBridgeRequest_gameTeam_getUserInfo:(id)arg1;
- (id)getChatViewController:(id)arg1 accType:(int)arg2;
- (void)handleJsBridgeRequest_gameTeam_sendTeamInvite:(id)arg1;
- (void)notifyUpdateTeamInfo:(id)arg1;
- (void)notifyRefreshAudioStaus:(id)arg1;
- (void)handleJsBridgeRequest_gameTeam_onload:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
