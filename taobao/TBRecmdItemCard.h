//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRecmdCard.h"

@class NSMutableArray, TBRecmdMaskImageView, UIButton, UIImageView, UILabel, UIView;

@interface TBRecmdItemCard : TBRecmdCard
{
    TBRecmdMaskImageView *_itemImgView;
    UILabel *_itemTitleLabel;
    UIImageView *_iconImgView;
    UILabel *_benefitPointLabel;
    UIImageView *_benefitPointBgImgView;
    UILabel *_priceTextLabel;
    UILabel *_salesLabel;
    UILabel *_descLabel;
    UIView *_separateLine;
    UIButton *_extendBtn;
    unsigned long long _iconType;
    NSMutableArray *_serviceIconLabels;
    UILabel *_serviceDescLabel;
    long long _titleNumberOfLines;
}

+ (double)cardHeight;
+ (double)cardWidth;
@property(nonatomic) long long titleNumberOfLines; // @synthesize titleNumberOfLines=_titleNumberOfLines;
@property(retain, nonatomic) UILabel *serviceDescLabel; // @synthesize serviceDescLabel=_serviceDescLabel;
@property(retain, nonatomic) NSMutableArray *serviceIconLabels; // @synthesize serviceIconLabels=_serviceIconLabels;
@property(nonatomic) unsigned long long iconType; // @synthesize iconType=_iconType;
@property(retain, nonatomic) UIButton *extendBtn; // @synthesize extendBtn=_extendBtn;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *salesLabel; // @synthesize salesLabel=_salesLabel;
@property(retain, nonatomic) UILabel *priceTextLabel; // @synthesize priceTextLabel=_priceTextLabel;
@property(retain, nonatomic) UIImageView *benefitPointBgImgView; // @synthesize benefitPointBgImgView=_benefitPointBgImgView;
@property(retain, nonatomic) UILabel *benefitPointLabel; // @synthesize benefitPointLabel=_benefitPointLabel;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) UILabel *itemTitleLabel; // @synthesize itemTitleLabel=_itemTitleLabel;
@property(retain, nonatomic) TBRecmdMaskImageView *itemImgView; // @synthesize itemImgView=_itemImgView;
- (void).cxx_destruct;
- (void)iconLabelsText:(id)arg1 atIndex:(long long)arg2;
- (void)extendBtnClicked:(id)arg1;
- (void)longPressItem:(id)arg1;
- (id)serviceIconLabel;
- (void)updateLayout;
- (void)prepareForReuse;
- (void)addSubviews;
- (id)init;

@end
