//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SpdyDemoteVip : NSObject
{
    _Bool _isDemote;
    int _errorCount;
    NSMutableArray *_errorArray;
}

@property(nonatomic) _Bool isDemote; // @synthesize isDemote=_isDemote;
@property(retain, nonatomic) NSMutableArray *errorArray; // @synthesize errorArray=_errorArray;
@property(nonatomic) int errorCount; // @synthesize errorCount=_errorCount;
- (void).cxx_destruct;
- (void)setErrorCode:(long long)arg1;
- (id)initWithURLErrorcode:(long long)arg1 withTwoErrorcode:(long long)arg2;

@end

