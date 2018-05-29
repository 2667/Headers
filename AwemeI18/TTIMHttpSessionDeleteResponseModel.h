//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber, TTIMHttpDeliveSilenceModel, TTIMHttpSessionDeleteModel;
@protocol Optional;

@interface TTIMHttpSessionDeleteResponseModel : JSONModel
{
    NSNumber *_cmd;
    NSNumber *_seqId;
    NSNumber<Optional> *_statusCode;
    TTIMHttpDeliveSilenceModel<Optional> *_deliveSilence;
    TTIMHttpSessionDeleteModel<Optional> *_sessionDeleteModel;
}

+ (id)keyMapper;
@property(retain, nonatomic) TTIMHttpSessionDeleteModel<Optional> *sessionDeleteModel; // @synthesize sessionDeleteModel=_sessionDeleteModel;
@property(retain, nonatomic) TTIMHttpDeliveSilenceModel<Optional> *deliveSilence; // @synthesize deliveSilence=_deliveSilence;
@property(retain, nonatomic) NSNumber<Optional> *statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSNumber *seqId; // @synthesize seqId=_seqId;
@property(retain, nonatomic) NSNumber *cmd; // @synthesize cmd=_cmd;
- (void).cxx_destruct;
- (id)transformToPBModel;
- (id)init;

@end

