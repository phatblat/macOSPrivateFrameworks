//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WBSForYouDataSourceWeightManager : NSObject
{
    id <WBSDictionaryKeyValueStore> _store;
}

- (void).cxx_destruct;
- (void)clear;
- (double)weightForSource:(unsigned long long)arg1;
- (void)downvoteSource:(unsigned long long)arg1;
- (id)initWithKeyValueStore:(id)arg1;

@end
