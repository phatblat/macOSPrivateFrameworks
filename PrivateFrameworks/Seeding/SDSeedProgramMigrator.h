//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SDSeedProgramMigrator : NSObject
{
}

+ (void)_writeDockFixupPlistWithFBA;
+ (BOOL)_enrollInSeedProgramFromCookie;
+ (void)_removeSUPrefOverrides;
+ (void)_removeObsoleteCatalogs;
+ (BOOL)fixupSeedProgramSettings;
+ (void)migrateSeedProgramSettings;

@end

