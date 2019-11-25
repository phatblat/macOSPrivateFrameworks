//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContentKit/DCMapsURLGenerator.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface DCCityMapperURLGenerator : DCMapsURLGenerator
{
    NSString *_startCoordinate;
    NSString *_endCoordinate;
}

+ (void)generateURLWithMapsLink:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSString *endCoordinate; // @synthesize endCoordinate=_endCoordinate;
@property(retain, nonatomic) NSString *startCoordinate; // @synthesize startCoordinate=_startCoordinate;
- (void).cxx_destruct;
- (void)populateQueryDictionary;
- (id)path;
- (id)host;
- (id)scheme;

@end

