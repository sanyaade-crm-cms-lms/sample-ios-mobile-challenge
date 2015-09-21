//
//  CapitalMarketsRevenue.h
//  AnyPresence SDK
//

/*!
 @header CapitalMarketsRevenue
 @abstract CapitalMarketsRevenue class
 */

#import "APObject.h"
#import "Typedefs.h"

/*!
 @class CapitalMarketsRevenue
 @abstract Generated model object: CapitalMarketsRevenue.
 @discussion Use @link //apple_ref/occ/cat/CapitalMarketsRevenue(Remote) @/link to add CRUD capabilities.
 The @link //apple_ref/occ/instp/CapitalMarketsRevenue/id @/link field is set as primary key (see @link //apple_ref/occ/cat/APObject(RemoteConfig) @/link) in [self init].
 */
@interface CapitalMarketsRevenue : APObject {
}

/*!
 @method dataSource
 @abstract Returns the data source class associated with a CapitalMarketsRevenue.
 @result Class representing the data source associated with a CapitalMarketsRevenue.
 */
+ (Class)dataSource;

/*!
 @var id
 @abstract Generated model property: id.
 @discussion Primary key. Generated on the server.
 */
@property (nonatomic, strong) NSString * id;

/*!
 @var clientId
 @abstract Generated model property: client_id.
 */
@property (nonatomic, strong) NSString * clientId;

/*!
 @var clientName
 @abstract Generated model property: client_name.
 */
@property (nonatomic, strong) NSString * clientName;

/*!
 @var clientTier
 @abstract Generated model property: client_tier.
 */
@property (nonatomic, strong) NSString * clientTier;

/*!
 @var grossComm
 @abstract Generated model property: gross_comm.
 */
@property (nonatomic, strong) NSNumber * grossComm;

/*!
 @var month
 @abstract Generated model property: month.
 */
@property (nonatomic, strong) NSString * month;

/*!
 @var productId
 @abstract Generated model property: product_id.
 */
@property (nonatomic, strong) NSString * productId;

/*!
 @var productName
 @abstract Generated model property: product_name.
 */
@property (nonatomic, strong) NSString * productName;

/*!
 @var profitLoss
 @abstract Generated model property: profit_loss.
 */
@property (nonatomic, strong) NSNumber * profitLoss;

/*!
 @var region
 @abstract Generated model property: region.
 */
@property (nonatomic, strong) NSString * region;

/*!
 @var year
 @abstract Generated model property: year.
 */
@property (nonatomic, strong) NSNumber * year;

@end
