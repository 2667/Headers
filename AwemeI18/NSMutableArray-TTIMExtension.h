//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (TTIMExtension)
- (_Bool)ttimSafeReplaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (_Bool)ttimSafeRemoveObjectAtIndex:(unsigned long long)arg1;
- (_Bool)ttimSafeInsertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)ttimSafeAddObject:(id)arg1;
- (id)ttimKeepTail:(unsigned long long)arg1;
- (id)ttimKeepHead:(unsigned long long)arg1;
- (id)ttimPopHeadN:(unsigned long long)arg1;
- (id)ttimPopHead;
- (id)ttimPushTailN:(id)arg1;
- (id)ttimPushTail:(id)arg1;
- (id)ttimPopTailN:(unsigned long long)arg1;
- (id)ttimPopTail;
- (id)ttimPushHeadN:(id)arg1;
- (id)ttimPushHead:(id)arg1;
@end

