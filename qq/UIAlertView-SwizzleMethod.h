//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIAlertView.h>

@interface UIAlertView (SwizzleMethod)
+ (id)alloc_qui;
- (void)QQDealloc;
- (void)QQdismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)doDismiss;
- (void)observeWebViewDeallocDismissAlert:(id)arg1;
- (void)QQShow;
- (void)setQQDelegate:(id)arg1;
- (id)initWithAlertViewTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5;
@property(nonatomic) _Bool dontDismissWhenEnterBackGround;
@end

