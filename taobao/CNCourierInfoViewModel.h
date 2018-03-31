//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CNCreatViewModel.h"

@class NSString;

@interface CNCourierInfoViewModel : CNCreatViewModel
{
    _Bool _onlyShowName;
    _Bool _noGoToDetail;
    _Bool _isAloneCar;
    int _unReadMsgNum;
    int _imType;
    int _isOpenIm;
    NSString *_courierIconUrl;
    NSString *_courierLinkUrl;
    NSString *_courierName;
    NSString *_starsNum;
    NSString *_cp;
    NSString *_uId;
    NSString *_phone;
    NSString *_statusCode;
    NSString *_evaluatedUrl;
    NSString *_imUrl;
}

@property(nonatomic) _Bool isAloneCar; // @synthesize isAloneCar=_isAloneCar;
@property(nonatomic) _Bool noGoToDetail; // @synthesize noGoToDetail=_noGoToDetail;
@property(nonatomic) _Bool onlyShowName; // @synthesize onlyShowName=_onlyShowName;
@property(nonatomic) int isOpenIm; // @synthesize isOpenIm=_isOpenIm;
@property(nonatomic) int imType; // @synthesize imType=_imType;
@property(copy, nonatomic) NSString *imUrl; // @synthesize imUrl=_imUrl;
@property(copy, nonatomic) NSString *evaluatedUrl; // @synthesize evaluatedUrl=_evaluatedUrl;
@property(copy, nonatomic) NSString *statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) int unReadMsgNum; // @synthesize unReadMsgNum=_unReadMsgNum;
@property(copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *uId; // @synthesize uId=_uId;
@property(copy, nonatomic) NSString *cp; // @synthesize cp=_cp;
@property(copy, nonatomic) NSString *starsNum; // @synthesize starsNum=_starsNum;
@property(copy, nonatomic) NSString *courierName; // @synthesize courierName=_courierName;
@property(copy, nonatomic) NSString *courierLinkUrl; // @synthesize courierLinkUrl=_courierLinkUrl;
@property(copy, nonatomic) NSString *courierIconUrl; // @synthesize courierIconUrl=_courierIconUrl;
- (void).cxx_destruct;
- (double)height;
- (Class)viewClass;

@end
