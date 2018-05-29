//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, WBFilterModel;

@interface WBFilterCollectionViewCell : UICollectionViewCell
{
    UIImageView *_filterImgView;
    UILabel *_filterNameLabel;
    UIImageView *_selectedImageView;
    UIImageView *_cornerTagImgView;
    WBFilterModel *_filterModel;
}

@property(retain, nonatomic) WBFilterModel *filterModel; // @synthesize filterModel=_filterModel;
@property(retain, nonatomic) UIImageView *cornerTagImgView; // @synthesize cornerTagImgView=_cornerTagImgView;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) UILabel *filterNameLabel; // @synthesize filterNameLabel=_filterNameLabel;
@property(retain, nonatomic) UIImageView *filterImgView; // @synthesize filterImgView=_filterImgView;
- (void).cxx_destruct;
- (void)updateCellSelectStatus:(_Bool)arg1;
- (void)layoutSubviews;
- (void)showNewTagIfNeeded;
- (void)updateCellContent;
- (id)initWithFrame:(struct CGRect)arg1;

@end

