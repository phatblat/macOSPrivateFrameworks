//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MediaConversionService/PHMediaFormatConversionSource.h>

@class NSString;

@interface PHMediaFormatConversionPlaceholderSource : PHMediaFormatConversionSource
{
    NSString *_fileType;
}

+ (id)videoSourceForFileType:(id)arg1;
+ (id)imageSourceForFileType:(id)arg1;
@property(copy, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
- (void).cxx_destruct;
- (struct CGSize)imageDimensions;
- (unsigned long long)length;
- (id)fileURL;
- (id)initWithFileType:(id)arg1 mediaType:(long long)arg2;

@end

