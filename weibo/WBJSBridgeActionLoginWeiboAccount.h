//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBJSBridgeAction.h"

@class WBAccount, WBProgressHUD;

@interface WBJSBridgeActionLoginWeiboAccount : WBJSBridgeAction
{
    WBAccount *_loginAccount;
    WBProgressHUD *_cookieLoadingHUD;
}

@property(retain, nonatomic) WBProgressHUD *cookieLoadingHUD; // @synthesize cookieLoadingHUD=_cookieLoadingHUD;
@property(retain, nonatomic) WBAccount *loginAccount; // @synthesize loginAccount=_loginAccount;
- (void).cxx_destruct;
- (id)availableToDomains;
- (void)cookieManagerCookieLoadingFailedNotification:(id)arg1;
- (void)cookieManagerDidBeiginCookieLoadingNotification:(id)arg1;
- (void)prepareForCookieLoadingCallback;
- (void)cookieManagerDidInsertSystemCookieNotification:(id)arg1;
- (void)prepareForSystemCookieInsertForAccount:(id)arg1;
- (void)hideCookieLoadingProgressHUDIfExist;
- (void)showCookieLoadingProgressHUD;
- (void)currentAccountWillChangeNotification:(id)arg1;
- (void)prepareForAccountLoginCallback;
- (void)startAction;
- (void)dealloc;

@end

