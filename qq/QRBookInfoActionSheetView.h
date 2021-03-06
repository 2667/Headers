//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIImageView;
@protocol QRBookInfoActionSheetViewDelegate;

@interface QRBookInfoActionSheetView : UIView
{
    UIImageView *_coverView;
    UIButton *_cancelBtn;
    NSString *_imageUrl;
    UIView *_headerView;
    double _btnHeight;
    double _padding;
    id <QRBookInfoActionSheetViewDelegate> _delegate;
}

@property(nonatomic) id <QRBookInfoActionSheetViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)onActionSheetButtonClicked:(id)arg1;
- (void)onCancelButtonlicked;
- (void)onDetailButtonClicked;
- (void)onHeadingClicked;
- (void)appendBorderToTarget:(id)arg1 withDirection:(id)arg2;
- (void)setCancelBtnLabel:(id)arg1;
- (void)initFooterViewWithActionCount:(long long)arg1;
- (void)initActionSheetWithActions:(id)arg1 andCount:(long long)arg2;
- (void)qqHttpSessionError:(id)arg1 error:(id)arg2;
- (void)qqHttpSessionDidLoad:(id)arg1 result:(id)arg2;
- (void)downloadCover;
- (void)initHeaderViewWithTitle:(id)arg1 subtitle:(id)arg2 imageUrl:(id)arg3 rightButton:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 andTitle:(id)arg2 subtitle:(id)arg3 imageUrl:(id)arg4 rightButton:(id)arg5 actions:(id)arg6;

@end

