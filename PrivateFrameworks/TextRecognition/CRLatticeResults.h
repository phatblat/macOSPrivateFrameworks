//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface CRLatticeResults : NSObject
{
    NSMutableArray *_mutableResults;
}

@property(retain, nonatomic) NSMutableArray *mutableResults; // @synthesize mutableResults=_mutableResults;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *results;
- (void)addResult:(id)arg1;
- (id)init;

@end
