//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "WBMLImageTextRealTimeMactchProtocol-Protocol.h"

@class NSString, WBMLImageTextRealTimeMatchModel;

@interface WBMLImageTextRealTimeMatchVModelWrap : NSObject <WBMLImageTextRealTimeMactchProtocol>
{
    WBMLImageTextRealTimeMatchModel *_model;
}

+ (id)wrapWithModel:(id)arg1;
@property(retain, nonatomic) WBMLImageTextRealTimeMatchModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)time;
- (id)site;
- (id)scoreB;
- (id)scoreA;
- (id)contentString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

