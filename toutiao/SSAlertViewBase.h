//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSViewBase.h"

@class UIView;

@interface SSAlertViewBase : SSViewBase
{
    UIView *_contentBaseView;
}

@property(retain, nonatomic) UIView *contentBaseView; // @synthesize contentBaseView=_contentBaseView;
- (void).cxx_destruct;
- (void)dismissDone;
- (void)_dismiss;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)showOnViewController:(id)arg1;
- (void)showOnWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
