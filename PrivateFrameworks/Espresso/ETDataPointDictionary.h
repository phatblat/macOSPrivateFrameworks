//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ETDataPointDictionary : NSObject
{
    map_b74cfcc1 _image_buffers;
    map_afad69f8 _float_buffers;
}

@property map_afad69f8 float_buffers; // @synthesize float_buffers=_float_buffers;
@property map_b74cfcc1 image_buffers; // @synthesize image_buffers=_image_buffers;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dataArrayForKey:(id)arg1 error:(id *)arg2;
- (float *)dataForKey:(id)arg1 error:(id *)arg2;
- (BOOL)setData:(float *)arg1 size:(unsigned long long)arg2 forKey:(id)arg3 freeWhenDone:(BOOL)arg4;
- (BOOL)setImage:(struct vImage_Buffer)arg1 forKey:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

