//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNVCardWritingOptions;

@interface CNVCard30PHOTOHelper : NSObject
{
    id <CNVCardPerson> _person;
    CNVCardWritingOptions *_options;
    unsigned long long _maxBytes;
}

@property(readonly, nonatomic) unsigned long long maxBytes; // @synthesize maxBytes=_maxBytes;
@property(readonly, nonatomic) CNVCardWritingOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) id <CNVCardPerson> person; // @synthesize person=_person;
- (void).cxx_destruct;
- (id)compressImage:(id)arg1 allowableCompressions:(id)arg2;
- (id)scaleImage:(id)arg1 toFit:(struct CGSize)arg2 allowableCompressionQuality:(id)arg3;
- (id)scaleImage:(id)arg1 toFitSizes:(id)arg2 allowableCompressionQuality:(id)arg3;
- (id)image;
- (id)largeImage;
- (id)bestEffortImage;
- (id)description;
- (id)initWithPerson:(id)arg1 options:(id)arg2 maximumDataLength:(unsigned long long)arg3;
- (id)init;

@end

