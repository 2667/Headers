//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ALBaseModel.h"

@class NSString;

@interface WBPFinishModel : ALBaseModel
{
    NSString *_aliayAccount;
    NSString *_moneyStr;
    NSString *_tipsMessage;
    NSString *_infoText;
    NSString *_navigationTitle;
    NSString *_moneyLeftText;
}

@property(copy, nonatomic) NSString *moneyLeftText; // @synthesize moneyLeftText=_moneyLeftText;
@property(copy, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
@property(copy, nonatomic) NSString *infoText; // @synthesize infoText=_infoText;
@property(copy, nonatomic) NSString *tipsMessage; // @synthesize tipsMessage=_tipsMessage;
@property(copy, nonatomic) NSString *moneyStr; // @synthesize moneyStr=_moneyStr;
@property(copy, nonatomic) NSString *aliayAccount; // @synthesize aliayAccount=_aliayAccount;
- (void).cxx_destruct;
- (id)keyForPropertyName:(id)arg1;

@end

