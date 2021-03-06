//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface TBVideoBarrageErrorView : UIView
{
    CDUnknownBlockType _retryBlock;
    UILabel *_errorTipLabel;
    UIButton *_retryButton;
}

@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) UILabel *errorTipLabel; // @synthesize errorTipLabel=_errorTipLabel;
@property(copy, nonatomic) CDUnknownBlockType retryBlock; // @synthesize retryBlock=_retryBlock;
- (void).cxx_destruct;
- (void)updateErrorMsg:(id)arg1;
- (void)layoutSubviews;
- (void)retryButtonTap;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

