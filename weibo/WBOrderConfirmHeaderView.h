//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, WBOrderDetailView, WBOrderInfo, WBTimelineAttributedTextView;

@interface WBOrderConfirmHeaderView : UIView
{
    WBTimelineAttributedTextView *titleLabel;
    UILabel *totalFeeLabel;
    UIImageView *lineImageView;
    WBOrderDetailView *detailView;
    WBOrderInfo *_order;
}

@property(retain, nonatomic) WBOrderInfo *order; // @synthesize order=_order;
- (void).cxx_destruct;
- (void)dealloc;
- (void)refreshSubViewFrames;
- (void)layoutSubviews;
- (long long)viewHeight;
- (id)initWithFrame:(struct CGRect)arg1;

@end

