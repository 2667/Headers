//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FFDashLine, UILabel;

@interface FFGiftView : UIView
{
    _Bool _enableShowZpSelloutTag;
    FFDashLine *_zpDashLine;
    UILabel *_titleLabel;
    UILabel *_specLabel;
    UILabel *_quantityLabel;
    UILabel *_priceLabel;
    UILabel *_sellOutTipLabel;
    UILabel *_giftTag;
}

@property(retain, nonatomic) UILabel *giftTag; // @synthesize giftTag=_giftTag;
@property(retain, nonatomic) UILabel *sellOutTipLabel; // @synthesize sellOutTipLabel=_sellOutTipLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *quantityLabel; // @synthesize quantityLabel=_quantityLabel;
@property(retain, nonatomic) UILabel *specLabel; // @synthesize specLabel=_specLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) FFDashLine *zpDashLine; // @synthesize zpDashLine=_zpDashLine;
@property(nonatomic) _Bool enableShowZpSelloutTag; // @synthesize enableShowZpSelloutTag=_enableShowZpSelloutTag;
- (void).cxx_destruct;
- (void)configViewWithZpModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

