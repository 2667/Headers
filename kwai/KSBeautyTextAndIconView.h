//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KSBeautyItemBackgroundView, UIImageView, UILabel;

@interface KSBeautyTextAndIconView : UIView
{
    KSBeautyItemBackgroundView *_itemBackgroundView;
    UILabel *_label;
    UIImageView *_imageView;
}

@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property(readonly, nonatomic) KSBeautyItemBackgroundView *itemBackgroundView; // @synthesize itemBackgroundView=_itemBackgroundView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end
