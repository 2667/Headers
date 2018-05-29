//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIViewController, WBFloatWindow;

@protocol WBFloatWindowProtcol <NSObject>

@optional
- (NSString *)luicode;
- (NSString *)lfid;
- (NSString *)uicode;
- (NSString *)floatWindowGetLiveStatus;
- (NSString *)floatWindowGetLiveId;
- (unsigned long long)modeType;
- (void)applicationDidBecomeActive:(WBFloatWindow *)arg1;
- (void)applicationDidResignActive:(WBFloatWindow *)arg1;
- (_Bool)equalFromViewController:(UIViewController *)arg1 info:(id)arg2 floatWindow:(WBFloatWindow *)arg3;
- (void)closeFloatView:(WBFloatWindow *)arg1;
- (void)recoverViewController:(UIViewController *)arg1 baseViewController:(UIViewController *)arg2 floatWindow:(WBFloatWindow *)arg3;
- (_Bool)willShowRecoverAnimal:(UIViewController *)arg1 baseViewController:(UIViewController *)arg2 floatWindow:(WBFloatWindow *)arg3;
- (_Bool)shouldShowInAnimal;
@end

