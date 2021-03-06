//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, WBLabel, WBMultiWeiboBackgrundView;
@protocol WBMultiWeiboSubViewDelegate;

@interface WBMultiWeiboSubView : UIView <UIGestureRecognizerDelegate>
{
    UIImageView *indicateImageView;
    WBLabel *contentLabel;
    UIButton *weiboSubViewButton;
    id <WBMultiWeiboSubViewDelegate> _delegate;
    WBMultiWeiboBackgrundView *_gradientView;
}

@property(retain, nonatomic) WBMultiWeiboBackgrundView *gradientView; // @synthesize gradientView=_gradientView;
@property(nonatomic) id <WBMultiWeiboSubViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)weiboSubButtonClick;
- (void)setWeiboContent:(id)arg1;
- (void)setGradientView;
- (void)setupCAGradientLayer:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 contentStr:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

