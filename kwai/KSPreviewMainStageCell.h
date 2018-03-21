//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class KSPreviewMainStageCellItem, NSString, UIImage, UIImageView, UILabel;

@interface KSPreviewMainStageCell : UICollectionViewCell
{
    KSPreviewMainStageCellItem *_item;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UIImage *_highlightImage;
    UIImage *_normalImage;
    NSString *_highlightKVOId;
}

@property(retain, nonatomic) NSString *highlightKVOId; // @synthesize highlightKVOId=_highlightKVOId;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(retain, nonatomic) UIImage *highlightImage; // @synthesize highlightImage=_highlightImage;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) KSPreviewMainStageCellItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)awakeFromNib;

@end
