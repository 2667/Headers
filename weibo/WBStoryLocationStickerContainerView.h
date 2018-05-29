//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView, UILabel;

@interface WBStoryLocationStickerContainerView : UIView
{
    double _labelMargin;
    double _imagePadding;
    UIColor *_textColor;
    UILabel *_titleLabel;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double imagePadding; // @synthesize imagePadding=_imagePadding;
@property(nonatomic) double labelMargin; // @synthesize labelMargin=_labelMargin;
- (void).cxx_destruct;
- (double)totoalWidth;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

