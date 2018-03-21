//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBSearchBaseCell.h"

@class TBShopSearchStreetItem, TBXSearchShopStreetView, UIImageView, UILabel, UIView;

@interface TBXSearchShopStreetCell : TBSearchBaseCell
{
    TBShopSearchStreetItem *_model;
    UIView *_containerView;
    UIImageView *_imageView;
    UILabel *_title1;
    UILabel *_title2;
    TBXSearchShopStreetView *_bottomLine;
    TBXSearchShopStreetView *_titleLine;
}

+ (struct CGSize)cellSizeWithModel:(id)arg1 searchService:(id)arg2 layoutStyle:(int)arg3;
@property(retain, nonatomic) TBXSearchShopStreetView *titleLine; // @synthesize titleLine=_titleLine;
@property(retain, nonatomic) TBXSearchShopStreetView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *title2; // @synthesize title2=_title2;
@property(retain, nonatomic) UILabel *title1; // @synthesize title1=_title1;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void)setModel:(id)arg1;
- (id)model;
- (void).cxx_destruct;
- (void)didSelect;
- (void)adjustViews;
- (void)render;
- (id)initWithFrame:(struct CGRect)arg1;

@end
