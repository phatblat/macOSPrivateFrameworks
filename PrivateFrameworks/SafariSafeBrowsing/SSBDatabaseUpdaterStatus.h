//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SSBDatabaseUpdaterStatus : NSObject
{
    struct DatabaseUpdaterStatus _databaseUpdaterStatus;
}

@property(readonly, nonatomic) unsigned long long databaseUpdaterState;
@property(readonly, nonatomic) NSString *provider;
- (id)_initWithDatabaseUpdaterStatus:(struct DatabaseUpdaterStatus)arg1;

@end

