//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDActionModel.h>

@class MPPlaybackArchive, NSNumber, NSSet;

@interface HMDMediaPlaybackActionModel : HMDActionModel
{
}

+ (id)properties;
+ (id)schemaHashRoot;
- (id)dependentUUIDs;
- (id)validate;
- (BOOL)validForStorage;
- (void)loadModelWithActionInformation:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSSet *accessories; // @dynamic accessories;
@property(retain, nonatomic) MPPlaybackArchive *encodedPlaybackArchive; // @dynamic encodedPlaybackArchive;
@property(retain, nonatomic) NSSet *profiles; // @dynamic profiles;
@property(retain, nonatomic) NSNumber *state; // @dynamic state;
@property(retain, nonatomic) NSNumber *volume; // @dynamic volume;

@end

