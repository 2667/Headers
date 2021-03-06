//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIButton, UILabel;
@protocol TBRateImageUploadProtocol;

@interface TBRateImageUploadView : UIView
{
    NSMutableArray *_imageViews;
    NSMutableArray *_ctrls;
    _Bool _upPicAllowed;
    long long _tagIndex;
    id <TBRateImageUploadProtocol> _delegate;
    UIButton *_addPhotoButton;
    UILabel *_addPhotoTipLable;
    UIView *_downLineView;
    UILabel *_noSupportUploadPicLable;
    NSMutableArray *_photoArray;
    double _photoButtonHeight;
    double _photoButtonWidth;
    double _splitWidth;
    double _kGuideViewWidth;
    double _kGuideViewHeight;
}

@property(nonatomic) double kGuideViewHeight; // @synthesize kGuideViewHeight=_kGuideViewHeight;
@property(nonatomic) double kGuideViewWidth; // @synthesize kGuideViewWidth=_kGuideViewWidth;
@property(nonatomic) double splitWidth; // @synthesize splitWidth=_splitWidth;
@property(nonatomic) double photoButtonWidth; // @synthesize photoButtonWidth=_photoButtonWidth;
@property(nonatomic) double photoButtonHeight; // @synthesize photoButtonHeight=_photoButtonHeight;
@property(retain, nonatomic) NSMutableArray *photoArray; // @synthesize photoArray=_photoArray;
@property(retain, nonatomic) UILabel *noSupportUploadPicLable; // @synthesize noSupportUploadPicLable=_noSupportUploadPicLable;
@property(retain, nonatomic) UIView *downLineView; // @synthesize downLineView=_downLineView;
@property(retain, nonatomic) UILabel *addPhotoTipLable; // @synthesize addPhotoTipLable=_addPhotoTipLable;
@property(retain, nonatomic) UIButton *addPhotoButton; // @synthesize addPhotoButton=_addPhotoButton;
@property(nonatomic) id <TBRateImageUploadProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long tagIndex; // @synthesize tagIndex=_tagIndex;
@property(nonatomic) _Bool upPicAllowed; // @synthesize upPicAllowed=_upPicAllowed;
- (void).cxx_destruct;
- (void)addPhoto;
- (void)setPictures:(id)arg1 editMode:(_Bool)arg2;
- (void)layoutSubViews;
- (void)onClick:(id)arg1;
- (id)getViewWithNumber:(int)arg1;
- (void)setBottomLineViewHide:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

