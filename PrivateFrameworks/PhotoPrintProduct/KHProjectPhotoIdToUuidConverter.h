//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface KHProjectPhotoIdToUuidConverter : NSObject
{
    NSDictionary *photoIdToUuidMap;
    BOOL deepCopy;
}

@property(nonatomic) BOOL deepCopy; // @synthesize deepCopy;
@property(retain, nonatomic) NSDictionary *photoIdToUuidMap; // @synthesize photoIdToUuidMap;
- (id)convertProjectData:(id)arg1;
- (void)processDictionary:(id)arg1;
- (void)processSet:(id)arg1;
- (void)processArray:(id)arg1;
- (id)returnMutableSet:(id)arg1;
- (id)returnMutableArray:(id)arg1;
- (id)returnMutableDictionary:(id)arg1;
- (void)processImageElement:(id)arg1;
- (void)dealloc;
- (id)initWithPhotoIdToUuidMap:(id)arg1 deepCopy:(BOOL)arg2;

@end

