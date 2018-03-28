//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AWERecordSticker, UIImageView, UILabel, UIView;

@interface AWEStickerCollectionViewCell : UICollectionViewCell
{
    _Bool _isDownloadAnimating;
    _Bool _isUsedOnLive;
    UIImageView *_downloadImgView;
    UIView *_selectedIndicatorView;
    AWERecordSticker *_item;
    UIImageView *_loadingImgView;
    UILabel *_nameLabel;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *loadingImgView; // @synthesize loadingImgView=_loadingImgView;
@property(nonatomic) _Bool isUsedOnLive; // @synthesize isUsedOnLive=_isUsedOnLive;
@property(nonatomic) _Bool isDownloadAnimating; // @synthesize isDownloadAnimating=_isDownloadAnimating;
@property(retain, nonatomic) AWERecordSticker *item; // @synthesize item=_item;
@property(retain, nonatomic) UIView *selectedIndicatorView; // @synthesize selectedIndicatorView=_selectedIndicatorView;
@property(retain, nonatomic) UIImageView *downloadImgView; // @synthesize downloadImgView=_downloadImgView;
- (void).cxx_destruct;
- (void)makeUnselected;
- (void)makeSelected;
- (void)makeSelectedWithDelay;
- (void)loadingImgStopRotate;
- (void)loadingImgStartRotate;
- (void)stopLoadingAnimation;
- (void)startLoadingAnimation;
- (void)__startLoadingAnimation;
- (void)downloadImgScaleDisappear;
- (void)downloadImgStopRotate;
- (void)downloadImgStartRotate;
- (id)createRotationAnimation;
- (void)configWithSticker:(id)arg1;
- (void)indicatorHoldAndDisappear;
- (void)indicatorDisappear;
- (void)indicatorAppearWithDelay:(_Bool)arg1;
- (void)buildSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

