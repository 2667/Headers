//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/TBReqGeneralListModel.h>

@class NSString;

@interface TBReqStoryVideoListModel : TBReqGeneralListModel
{
    unsigned int _pullType;
    unsigned int _seq;
    unsigned long long _uid;
    NSString *_unionID;
}

@property(nonatomic) unsigned int seq; // @synthesize seq=_seq;
@property(nonatomic) unsigned int pullType; // @synthesize pullType=_pullType;
@property(retain, nonatomic) NSString *unionID; // @synthesize unionID=_unionID;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
- (id)getRequestPBData;
- (void)dealloc;

@end

