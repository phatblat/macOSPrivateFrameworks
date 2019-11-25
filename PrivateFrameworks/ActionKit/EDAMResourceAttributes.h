//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ActionKit/FATObject.h>

@class EDAMLazyMap, NSNumber, NSString;

@interface EDAMResourceAttributes : FATObject
{
    NSString *_sourceURL;
    NSNumber *_timestamp;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSNumber *_altitude;
    NSString *_cameraMake;
    NSString *_cameraModel;
    NSNumber *_clientWillIndex;
    NSString *_recoType;
    NSString *_fileName;
    NSNumber *_attachment;
    EDAMLazyMap *_applicationData;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) EDAMLazyMap *applicationData; // @synthesize applicationData=_applicationData;
@property(retain, nonatomic) NSNumber *attachment; // @synthesize attachment=_attachment;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *recoType; // @synthesize recoType=_recoType;
@property(retain, nonatomic) NSNumber *clientWillIndex; // @synthesize clientWillIndex=_clientWillIndex;
@property(retain, nonatomic) NSString *cameraModel; // @synthesize cameraModel=_cameraModel;
@property(retain, nonatomic) NSString *cameraMake; // @synthesize cameraMake=_cameraMake;
@property(retain, nonatomic) NSNumber *altitude; // @synthesize altitude=_altitude;
@property(retain, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(retain, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *sourceURL; // @synthesize sourceURL=_sourceURL;
- (void).cxx_destruct;

@end

