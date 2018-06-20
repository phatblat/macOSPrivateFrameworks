//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DeviceManagement/DMFTaskRequest.h>

@class NSNumber, NSString;

@interface DMFRemoveManagedBookRequest : DMFTaskRequest
{
    NSNumber *_iTunesStoreID;
    NSString *_persistentID;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;
@property(copy, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
@property(copy, nonatomic) NSNumber *iTunesStoreID; // @synthesize iTunesStoreID=_iTunesStoreID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

