//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSString;

@interface RTTUtteranceRequest : NSObject
{
    unsigned long long _index;
    NSString *_string;
    NSIndexPath *_cellIndexPath;
}

+ (id)utteranceRequestWithIndex:(unsigned long long)arg1 forString:(id)arg2 inCellPath:(id)arg3;
@property(nonatomic) __weak NSIndexPath *cellIndexPath; // @synthesize cellIndexPath=_cellIndexPath;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)description;

@end

