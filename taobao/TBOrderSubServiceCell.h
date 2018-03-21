//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOrderBasicCell.h"

@class UIImageView, UILabel;

@interface TBOrderSubServiceCell : TBOrderBasicCell
{
    UIImageView *_pic;
    UILabel *_title;
    UILabel *_sku;
    UILabel *_price;
    UILabel *_count;
    UILabel *_refundStatus;
}

+ (double)cellHeight:(id)arg1 withWidth:(double)arg2 styleKitContext:(id)arg3 controller:(id)arg4;
@property(retain, nonatomic) UILabel *refundStatus; // @synthesize refundStatus=_refundStatus;
@property(retain, nonatomic) UILabel *count; // @synthesize count=_count;
@property(retain, nonatomic) UILabel *price; // @synthesize price=_price;
@property(retain, nonatomic) UILabel *sku; // @synthesize sku=_sku;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImageView *pic; // @synthesize pic=_pic;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)bindData:(id)arg1 controller:(id)arg2 styleKitContext:(id)arg3;
- (void)viewLayout;
- (void)dealloc;

@end
