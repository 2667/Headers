//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPBaseViewController.h"

@class APButton, NSDictionary, SPQRCodeModel, TTTAttributedLabel, UIImageView, UIView;

@interface SPQRCodeShareViewController : SPBaseViewController
{
    SPQRCodeModel *_codeMoel;
    UIImageView *_qrcodeImgView;
    UIView *_payeeIconImgBorderView;
    UIImageView *_payeeIconImgView;
    TTTAttributedLabel *_payeeIndicatroLabel;
    APButton *_gotoDetailBtn;
    NSDictionary *_formatDict;
}

@property(retain, nonatomic) NSDictionary *formatDict; // @synthesize formatDict=_formatDict;
@property(retain, nonatomic) APButton *gotoDetailBtn; // @synthesize gotoDetailBtn=_gotoDetailBtn;
@property(retain, nonatomic) TTTAttributedLabel *payeeIndicatroLabel; // @synthesize payeeIndicatroLabel=_payeeIndicatroLabel;
@property(retain, nonatomic) UIImageView *payeeIconImgView; // @synthesize payeeIconImgView=_payeeIconImgView;
@property(retain, nonatomic) UIView *payeeIconImgBorderView; // @synthesize payeeIconImgBorderView=_payeeIconImgBorderView;
@property(retain, nonatomic) UIImageView *qrcodeImgView; // @synthesize qrcodeImgView=_qrcodeImgView;
@property(retain, nonatomic) SPQRCodeModel *codeMoel; // @synthesize codeMoel=_codeMoel;
- (void).cxx_destruct;
- (void)gotoPayeeDetail;
- (void)buildDetailIndicatorLabel;
- (id)generateQrCode;
- (double)dynamicWidth:(double)arg1;
- (void)buildView;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)back;
- (id)initWithQRCodeModel:(id)arg1 formatDict:(id)arg2;

@end

