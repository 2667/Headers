//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UILabel, UIView, WBPhotoTagModel;
@protocol WBPhotoViewerBottomOperationcProductSubViewDelegate;

@interface WBPhotoViewerBottomOperationProductSubview : UIButton
{
    UILabel *_summaryLabel;
    UIView *_box;
    UIView *_centerLine;
    UILabel *_actionLabel;
    UILabel *_priceLabel;
    WBPhotoTagModel *_productTag;
    id <WBPhotoViewerBottomOperationcProductSubViewDelegate> _delegate;
}

@property(nonatomic) __weak id <WBPhotoViewerBottomOperationcProductSubViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WBPhotoTagModel *productTag; // @synthesize productTag=_productTag;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(retain, nonatomic) UIView *centerLine; // @synthesize centerLine=_centerLine;
@property(retain, nonatomic) UIView *box; // @synthesize box=_box;
@property(retain, nonatomic) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
- (void).cxx_destruct;
- (void)jumpButtonPressed:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

