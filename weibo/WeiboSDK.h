//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface WeiboSDK : NSObject
{
}

+ (id)queryDictionaryOfURLQuery:(id)arg1 usingEncoding:(unsigned long long)arg2;
+ (id)serializeURLString:(id)arg1 withParams:(id)arg2;
+ (id)queryValueWithName:(id)arg1 urlString:(id)arg2;
+ (_Bool)registerApp:(id)arg1;
+ (_Bool)registerAppWithAppKey:(id)arg1;
+ (id)callbackSchemePrefix;
+ (id)registedAppsPasteboardName;
+ (id)wbsdk_platform;
+ (_Bool)isEmptyOrWhitespace:(id)arg1;
+ (id)getWeiboUA;
+ (_Bool)sendResponse:(id)arg1;
+ (_Bool)sendRequest:(id)arg1;
+ (_Bool)openAppWithTransferObject:(id)arg1;
+ (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
+ (void)didReceiveAuthorizeResponse:(id)arg1 fromAuthorizeWebView:(id)arg2;
+ (void)directlySendResponseToCurrentApp:(id)arg1;
+ (void)didReceiveUnSupportedResponse:(id)arg1;
+ (void)didReceiveUnSupportedRequest:(id)arg1;
+ (id)getWeiboAid;
+ (id)getSDKVersion;
+ (id)getWeiboAppSupportMaxSDKVersion;
+ (id)deprecatedWeiboAppSupportMaxSDKVersion;
+ (id)getWeiboAppInstallUrl;
+ (_Bool)openWeiboApp;
+ (_Bool)isWeiboAppInstalled;
+ (void)inviteFriend:(id)arg1 withUid:(id)arg2 withToken:(id)arg3 delegate:(id)arg4 withTag:(id)arg5;
+ (void)logOutWithToken:(id)arg1 delegate:(id)arg2 withTag:(id)arg3;
+ (void)enableDebugMode:(_Bool)arg1;
+ (id)webAuthorizeURL;
+ (id)webAuthorizeHost;
+ (id)hashKey;
+ (void)removePasteboardWithName:(id)arg1;
+ (id)pasteboardWithName:(id)arg1 create:(_Bool)arg2;
+ (_Bool)canAccessPrivatePasteboard;
+ (id)requestUserInfoCache;

@end

