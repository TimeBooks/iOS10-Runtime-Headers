/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
 */

@interface NACAudioRoutesMessage : PBCodable <NSCopying> {
    NSMutableArray *_audioRoutes;
    NSString *_category;
}

@property (nonatomic, retain) NSMutableArray *audioRoutes;
@property (nonatomic, retain) NSString *category;
@property (nonatomic, readonly) BOOL hasCategory;

- (void).cxx_destruct;
- (void)addAudioRoutes:(id)arg1;
- (id)audioRoutes;
- (id)audioRoutesAtIndex:(unsigned int)arg1;
- (unsigned int)audioRoutesCount;
- (id)category;
- (void)clearAudioRoutes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasCategory;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAudioRoutes:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)writeTo:(id)arg1;

@end