//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIView, UIWindow;

@interface KSSproutingViewController : UIViewController <UIGestureRecognizerDelegate>
{
    _Bool _sprouting;
    UIView *_sproutView;
    CDUnknownBlockType _onHidden;
    UIView *_sproutViewContainer;
    UIWindow *_window;
}

@property(nonatomic) _Bool sprouting; // @synthesize sprouting=_sprouting;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIView *sproutViewContainer; // @synthesize sproutViewContainer=_sproutViewContainer;
@property(copy, nonatomic) CDUnknownBlockType onHidden; // @synthesize onHidden=_onHidden;
@property(retain, nonatomic) UIView *sproutView; // @synthesize sproutView=_sproutView;
- (void).cxx_destruct;
- (void)shrinkBack;
- (id)createWindow;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onTouchDown;
- (void)sproutWith:(id)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

