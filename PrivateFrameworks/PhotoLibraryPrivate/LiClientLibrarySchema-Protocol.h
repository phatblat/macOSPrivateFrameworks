//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LiLibrarySchema.h"

@protocol LiClientLibrarySchema <LiLibrarySchema>
+ (long long)libraryCompatibleBackToVersion;
+ (long long)libraryVersion;
- (void)declareSchema:(id <LiSchemaAddTable>)arg1;
- (unsigned long long)deprecatedTableCount;
- (unsigned long long)tableCount;
@end

