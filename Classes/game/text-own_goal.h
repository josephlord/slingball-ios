#import <OpenGLES/ES1/gl.h>

#import "NVTypes.h"

static const NVNormalVertex TextOwnGoalVertexData[] = {
	{/*v:*/{2.315789, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.473684, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.315789, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.315789, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.473684, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.473684, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.315789, -0.078947, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.473684, 0.500000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.315789, 0.500000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.315789, -0.078947, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.473684, -0.078947, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.473684, 0.500000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.105263, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.263158, 0.500000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.105263, 0.500000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.105263, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.263158, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.263158, 0.500000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.473684, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.052632, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.473684, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.473684, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.894737, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.052632, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.894737, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.052632, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.052632, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.894737, 0.078947, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.052632, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.894737, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.473684, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.632105, -0.079474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.473684, 0.078947, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.632105, -0.079474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.894737, 0.078947, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.473684, 0.078947, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.632105, -0.079474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.895263, -0.079474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.894737, 0.078947, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.895263, -0.079474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.052632, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.894737, 0.078947, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.473684, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.632105, -0.132105, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.632105, -0.079474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.895263, -0.132105, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.052632, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.895263, -0.079474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.473684, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.895263, -0.132105, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.632105, -0.132105, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.473684, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{2.052632, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.895263, -0.132105, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.842105, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.000000, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.842105, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.000000, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.421053, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.842105, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.000000, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.263158, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.421053, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.263158, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.421053, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.421053, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.842105, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.000000, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.000000, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.263158, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.421053, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.263158, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.842105, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.263158, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.000000, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.842105, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.421053, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{1.263158, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.210526, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.368421, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.210526, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.368421, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.789474, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.210526, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.368421, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.631579, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.789474, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.631579, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.789474, -0.500000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.789474, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.210526, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.368421, -0.130526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.368421, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.631579, -0.130526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.789474, -0.500000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.631579, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.210526, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.631579, -0.130526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.368421, -0.130526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.210526, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.631579, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.631579, -0.130526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.631579, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.789474, -0.500000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.631579, -0.130526, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.631579, -0.342105, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.789474, -0.500000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.631579, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.210526, -0.500000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.631579, -0.342105, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.210526, -0.342105, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.210526, -0.500000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.789474, -0.500000, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{0.631579, -0.342105, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.789474, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.631579, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.789474, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.631579, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.210526, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.789474, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.631579, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.368421, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.210526, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.368421, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.210526, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.210526, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.789474, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.631579, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.631579, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.368421, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.210526, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.368421, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.842105, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.684210, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.842105, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.842105, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.684210, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.684210, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.421052, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.263158, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.421052, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.421052, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.263158, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.263158, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.000000, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.842105, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.000000, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.000000, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.842105, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.842105, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.842105, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.421052, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.684210, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.842105, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.263158, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.421052, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.842105, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.000000, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.263158, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.842105, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-0.842105, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.000000, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-2.473684, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-2.315789, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-2.473684, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-2.315789, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.894737, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-2.473684, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-2.315789, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-2.052631, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.894737, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-2.052631, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.894737, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.894737, 0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-2.473684, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-2.315789, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-2.315789, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-2.052631, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.894737, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-2.052631, 0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-2.473684, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-2.052631, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-2.315789, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-2.473684, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-1.894737, -0.289474, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
	{/*v:*/{-2.052631, -0.131579, 0.000000}, /*n:*/{0.000000, 0.000000, 1.000000} },
};

#define kTextOwnGoalNumberOfVertices 186
