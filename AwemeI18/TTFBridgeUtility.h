//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTFBridgeUtilityProtocol-Protocol.h"

@class UIButton, UIImage, UIView, UIViewController, UIWebView;

@interface TTFBridgeUtility : NSObject <TTFBridgeUtilityProtocol>
{
    UIView *_targetView;
    UIButton *_targetBackButton;
    UIViewController *_parentVC;
    UIWebView *_dependentWebView;
    UIImage *_darkStyleBackImage;
    UIImage *_lightStyleBackImage;
}

@property(retain, nonatomic) UIImage *lightStyleBackImage; // @synthesize lightStyleBackImage=_lightStyleBackImage;
@property(retain, nonatomic) UIImage *darkStyleBackImage; // @synthesize darkStyleBackImage=_darkStyleBackImage;
@property(nonatomic) __weak UIWebView *dependentWebView; // @synthesize dependentWebView=_dependentWebView;
@property(nonatomic) __weak UIViewController *parentVC; // @synthesize parentVC=_parentVC;
@property(nonatomic) __weak UIButton *targetBackButton; // @synthesize targetBackButton=_targetBackButton;
@property(nonatomic) __weak UIView *targetView; // @synthesize targetView=_targetView;
- (void).cxx_destruct;
- (void)applicationWillEnterForegroundNotification:(id)arg1;
- (void)openNewPage:(id)arg1;
- (void)openSafari:(id)arg1;
- (void)needUpdate;
- (void)changeBackButtonToDarkStyle:(_Bool)arg1;
- (void)changeStatusBarToDarkStyle:(_Bool)arg1;
- (void)changeStatusBarBackgroundColor:(id)arg1;
- (void)dealloc;

@end

