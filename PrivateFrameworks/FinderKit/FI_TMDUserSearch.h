//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface FI_TMDUserSearch : NSObject
{
    NSString *_filter;
    NSArray *_scope;
    NSArray *_slices;
    NSNumber *_searchSystemFiles;
    NSNumber *_fileNameOnly;
    NSNumber *_searchNonFinderFiles;
}

@property(retain) NSArray *slices; // @synthesize slices=_slices;
@property(retain) NSNumber *searchNonFinderFiles; // @synthesize searchNonFinderFiles=_searchNonFinderFiles;
@property(retain) NSNumber *fileNameOnly; // @synthesize fileNameOnly=_fileNameOnly;
@property(retain) NSNumber *searchSystemFiles; // @synthesize searchSystemFiles=_searchSystemFiles;
@property(retain) NSArray *scope; // @synthesize scope=_scope;
@property(retain) NSString *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

